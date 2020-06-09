#include<iostream>
#include<string>
using namespace std;

template<class V>
class MapNode{
	public:
		string key;
		V value;
		MapNode *next;
		MapNode(string key, V value){
			this->key = key;
			this->value = value;
			this->next = NULL;
		}
		~MapNode(){
			delete next;
		}
};

template<class V>
class ourMap{
	MapNode<V> ** buckets;
	int count;
	int numBuckets;
	int getBucketIndex(string key){
		int hashCode = 0;
		int currentCoeff = 1;
		for(int i = key.length() - 1; i >= 0; i--){
			hashCode += key[i] + currentCoeff;
			hashCode %= numBuckets;
			currentCoeff *= 37; // any prime number
			currentCoeff %= numBuckets;
		}
		return hashCode %numBuckets;
	}
	public:
		ourMap(){
			count = 0;
			numBuckets = 10;
			buckets = new MapNode<V> *[numBuckets];
			for(int i=0; i < numBuckets; i++){
				buckets[i] = NULL;
			}
		}
		~ourMap(){
			for(int i=0; i < numBuckets; i++){
				delete buckets[i];
			}
			delete []buckets;
		}
		int size(){
			return count;
		}
		void Insert(string key, V value){
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			while(head!=NULL){
				if(head->key==key){
					head->value = value;
					return ;
				}
				head = head->next;
			}
			head = buckets[bucketIndex];
			MapNode<V> *node = new MapNode<V>(key, value);
			node->next = head;
			buckets[bucketIndex] = node;
			count++;
		}
		V remove(string key){
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			MapNode<V> *prev = NULL;
			while(head!=NULL){
				if(head->key == key){
					if(prev==NULL){
						buckets[bucketIndex] = head->next;
					} else{
						prev->next = head->next;
					}
					V value = head->value;
					head->next = NULL;
					delete head;
					count--;
					return value;
				}
				prev = head;
				head = head->next;
			}
			return -1;
		}
		V getValue(string key){
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			while(head!=NULL){
				if(head->key == key){
					return head->value;
				}
				head = head->next;
			}
			return -1;
		}
};

int main(){
	ourMap<int> m;
	m.Insert("abc",1);
	m.Insert("def",2);
	
	cout<<m.getValue("abc")<<endl;
	cout<<m.getValue("def")<<endl;
}
