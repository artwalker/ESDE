
struct xLIST_ITEM
{
	TickType_t xItemValue;             
	struct xLIST_ITEM *  pxNext;      
	struct xLIST_ITEM *  pxPrevious;  
	void * pvOwner;					   
	void * pvContainer;		       
};
typedef struct xLIST_ITEM ListItem_t;  