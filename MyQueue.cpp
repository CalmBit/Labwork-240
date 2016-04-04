#include "MyQueue.h"

void MyQueue::m_enqueue(int val)
{
  stackOne.push(val);
}

int MyQueue::m_dequeue()
{
  if(stackTwo.empty())
  {
	while (!stackOne.empty())
    {
      stackTwo.push(stackOne.top());
      stackOne.pop();
    }
  }
  int val = stackTwo.top();
  stackTwo.pop();
  return val;
}

int MyQueue::m_peek()
{
  if(stackTwo.empty())
  {
	while (!stackOne.empty())
    {
      stackTwo.push(stackOne.top());
      stackOne.pop();
    }
  }
  return stackTwo.top();
}


bool MyQueue::m_isEmpty()
{
  return stackOne.empty() && stackTwo.empty();
}
