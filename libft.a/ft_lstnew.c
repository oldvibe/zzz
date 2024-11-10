#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*nv; 

	nv = (t_list *)malloc(sizeof(t_list));
	nv->content = content;
	nv->next = NULL;
	return (nv);
}