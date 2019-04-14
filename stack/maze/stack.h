

template<class T>class stack
{
public:
	stack() {
		head = NULL;
		element_num = 0;
	}
	~stack() {
		
	};

private:
	struct node 
	{
		T data;
		node *next;
	};
	node *head;
	node *p;
	int element_num;
};