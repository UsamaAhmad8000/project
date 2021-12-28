#include <iostream>
#include <stdio.h>
using namespace std;
void selection_sort()
{
	cout << "\n\n\t\t\t***Selection Sort selected***\n\n";
	int i, j, min, n;
	cout << "Enter number of element that u want to insert:";
	cin >> n;
	int arr[n];
	cout << "Enter " << n << " numbers\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Before selection sort " << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
			swap(arr[i], arr[min]);
	}
	cout << "\nAfter selection sort " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

//==========================================================================//

void bubble_sort()
{
	cout << "\n\n\t\t\t***Bubble Sort selected***\n\n";
	int i, j, n;
	cout << "Enter number of element that u want to insert:";
	cin >> n;
	int arr[n];
	cout << "Enter " << n << " numbers\n";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Before bubble sort " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j + 1], arr[j]);
			}
		}
	}
	cout << "\nAfter bubble sort " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

//==========================================================================//

void insertion_sort()

{
	cout << "\n\n\t\t\t***Insertion sort selected***\n\n";
	int i, j, temp, n;
	cout << "Enter number of element that u want to insert:";
	cin >> n;
	int arr[n];
	cout << "Enter " << n << " numbers\n";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Before insertion sort " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	for (i = 1; i < n; i++)

	{
		temp = arr[i];

		for (j = i; arr[j - 1] > temp; j--)

			arr[j] = arr[j - 1];
		arr[j] = temp;
	}
	cout << "\nAfter insertion sort " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

//==========================================================================//

void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i, j, k;
	i = 0;
	j = 0;
	k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}
void merge_Sort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		merge_Sort(arr, l, m);
		merge_Sort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}
int partition(int arr[], int l, int r)
{
	int pivot = arr[l];
	int start = l;
	int end = r;
	while (start < end)
	{
		while (arr[start] <= pivot)
			start++;
		while (arr[end] > pivot)
			end--;
		if (start < end)
			swap(arr[start], arr[end]);
	}
	swap(arr[l], arr[end]);
	return end;
}
void merge_Display(){
    int n;
    cout << "\n\n\t\t\t***Merge Sort Selected***\n\n";
			cout << "Enter number of element that u want to insert:";
			cin >> n;
			int arr[n];
			cout << "Enter " << n << " numbers\n";
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			cout << "Before Merge Sort " << endl;
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
			merge_Sort(arr, 0, n - 1);
			cout << "\nAfter Merge Sort " << endl;
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
}

//======================================================================//

void quick_sort(int arr[], int l, int r)
{
	if (l < r)
	{
		int loc = partition(arr, l, r);
		quick_sort(arr, l, loc - 1);
		quick_sort(arr, loc + 1, r);
	}
}

void quick_sort_Display(){
    int n;
			cout << "\n\n\t\t\t***Quick Sort Selected***\n\n";
			cout << "Enter number of element that u want to insert:";
			cin >> n;
			int arr[n];
			cout << "Enter " << n << " numbers\n";
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			cout << "Before Quick Sort " << endl;
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
			quick_sort(arr, 0, n - 1);
			cout << "\nAfter Quick Sort " << endl;
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
		}
		
//==========================================================================//

    class Node
{
	public:
	int data;
	Node* next;
	Node* prev;
};

void pushNumber(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

void insertaftersort(struct Node** head_ref, struct Node* newNode)
{
    struct Node* current;

    if (*head_ref == NULL) 
    {
        *head_ref = newNode;   
    }
    else if ((*head_ref)->data >= newNode->data)   
    {
        newNode->next = *head_ref;  
        newNode->next->prev = newNode; 
        *head_ref = newNode;    
    }
    else
    {
        current = *head_ref;  
        while (current->next != NULL && current->next->data < newNode->data)  
        {                             
            current = current->next;
        }
        newNode->next = current->next;  
                                      
        if (current->next != NULL)  
        {
            newNode->next->prev = newNode; 
        }
        current->next = newNode; 
        newNode->prev = current;    
    }
}

void insertionSort(struct Node** head_ref)
{
    struct Node* sorted = NULL;    
    struct Node* current = *head_ref;   

    while (current != NULL)
    {
        struct Node* next = current->next;  
        current->prev = current->next = NULL;  
        insertaftersort(&sorted, current); 
        current = next; 
    }
    *head_ref = sorted; 
}

void printList(Node* node)
{
	Node* last;
	while (node != NULL)
	{
		cout<<" "<<node->data<<" ";
		last = node;
		node = node->next;
	}
}
void link_List_Display()
        {
	Node* head = NULL;

	pushNumber(&head, 3);
	pushNumber(&head, 8);
	pushNumber(&head, 2);
	pushNumber(&head, 4);
	pushNumber(&head, 9);
	cout<<"Link List Traversal : \n";
	    printList(head);
	 insertionSort(&head);
	cout<<"\nSorted Link List Traversal : \n";
    	printList(head);
	
}

//==========================================================================//

void information()
{
	cout << "\nEnter 1 for Bubble Sort:\n";
	cout << "Enter 2 for Insertion Sort:\n";
	cout << "Enter 3 for Selection Sort:\n";
	cout << "Enter 4 for Merge Sort:\n";
	cout << "Enter 5 for Quick Sort:\n";
	cout << "Enter 6 for Link List:\n";
	cout << "Enter -1 for exit";
}

//==========================================================================//

int main()
{
	int num, n;
	while (num != -1)
	{   
	    cout << endl;
	    information();
		cout << "\n\nEnter your choice:";
		cin >> num;
		cout << endl;
		switch (num)
		{
		case 0:
			break;
		case 1:
			bubble_sort();
			break;
		case 2:
			insertion_sort();
			break;
		case 3:
			selection_sort();
			break;
		case 4:
			merge_Display();
		break;
		case 5:
		    quick_sort_Display();
		break;
		case 6:
		    link_List_Display();
		break;
		default:
			cout << "invalid choice" << endl;
		}
	}
}
