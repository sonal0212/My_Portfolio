/*Write a menu driven program that implement following operations (using separate functions) on a linear array: 
a) Insert a new element at end aswell as at a given position. b) Delete an element from a given whose value is 
given or whose position is given.c) To find the location of a given element. d) To display the elements of the linear array.*/
#include<iostream>
using namespace std;
void InsertionAtEnd(int arr[],int size,int num)
{
	arr[size]=num;
	size++;
			
}
void insertionAtSpecificPos(int arr[],int size,int num,int pos)
{
		if(pos<=0 || pos>size+1)
		{
			cout<<"invalid position";
			exit(1);
		}
		else
		{
			for (int i = size-1; i >pos ; i--)
			{
				arr[i+1]=arr[i];
			}
			arr[pos]=num;
			size++;
			exit(1);
		}
}
			
void search(int arr[],int size,int num)
       	{
       		int count=0;
       		for(int i=0;i<size;i++)
			{
				if(arr[i]==num)
				{
					cout<<"the element is at:"<<i<<endl;
					count++;
					break;
				}
				if(i==size)
				cout<<"element not found"<<endl;

			}
			if(count==0)
			{
				cout<<"element not found"<<endl;
			}
	
      	}

void deletion(int arr[],int size,int num)
{
	int i=0;
	int found=0;
	if(arr[i]==num)
	{
		for(i=0; i<size-1; i++)
		{
		    arr[i] = arr[i+1];
		    found++;
		    i--;
		    size--;
		}
	}
	if(found==0)
		cout<<"\nElement doesn't found in the Array!"<<endl;
	else
		cout<<"\nElement Deleted Successfully!"<<endl;

}
void DeletionAtSpecificPos(int arr[],int size,int pos)
{
	if(pos<=0 || pos>size+1)
		{
			cout<<"invalid position";
			exit(1);
		}
	 else
	    {
	        int del=arr[pos-1];  
		    for(int i=pos-1;i<size;i++)
				{
					arr[i]=arr[i+1];
					
				}
			size--;
			cout<<"the deleted element is:"<<del<<endl;
		}	
}
void display(int arr[],int size)
{
	cout<<"the new array is:"<<" ";
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
}

int main()
{
	int arr[10],num,pos,size,ch,i;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	cout<<"enter the elements"<<endl;
		for(i=0;i<size;i++)
		{
			cin>>arr[i];

		}
	cout<<"Enter ur choice:\n1""To insert at the end\n2.""To insert the no. at a specific position\n."
	"3.deletion at given position\n4.""deletion of an element from the array\n5.""searching the element\n."
    "6.displaying the new element\n.""7.exit"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			cout<<"----INSERTION AT A THE END-----"<<endl;
			cout<<"enter the no. to be inserted"<<" "<<endl;
			cin>>num;
			InsertionAtEnd(arr,size,num);
            break;
		}
		case 2:
		{
			cout<<"----INSERTION AT A SPECIFIC LOCATION-----"<<endl;
			cout<<"enter the no. to be inserted"<<" "<<endl;
			cin>>num;
			cout<<"enter the position"<<" "<<endl;
			cin>>pos;
			insertionAtSpecificPos(arr,size,num,pos);
            break;
       }
       case 3:
       {
       	cout<<"----DELETION AT A SPECIFIC LOCATION-----"<<endl;
       	cout<<"enter the position"<<" "<<endl;
		cin>>pos;
       	DeletionAtSpecificPos(arr,size,pos);
           break; 
       }
       case 4:
       {
		 cout<<"----Deletion of an element from the array----"<<endl;
		 cout<<"Enter the number you want to delete :"<<endl;
		 cin>>num;
		 deletion(arr,size,num);
        break;
       }
       case 5:
       {
       	cout<<"---searching thr element-----"<<endl;
       	cout<<"Enter the element you want to search :"<<endl;
   		cin>>num;
       	search(arr,size,num);
           break;
       }
       case 6:
       {
       	cout<<"----Display the array-----"<<endl;
       	display(arr,size);
       break;
       }
       default:
       {
       		exit(1);
       }
   }

	return 0;
}