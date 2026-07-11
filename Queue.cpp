#include <iostream>
#include <queue>
using namespace std;
int main()
{
  int x;
  queue<int> iQueue;

  cout << "I will now enqueue items...\n";
  for (x = 2; x < 8; x += 2)
  {
  cout << "Pushing " << x << endl;
  iQueue.push(x);
  }
  cout << "I will now dequeue items...\n";
  for (x = 2; x < 8; x += 2)
  {
  cout << "Popping " << iQueue.front() << endl;
  iQueue.pop();
  }
}