#define _CRT_SECURE_NO_WARNINGS 1    

															//1.【26删除有序数组中的重复项】

//思路：双指针，如果指针2不等于指针1，指针1++，赋值为*指针2
//int removeDuplicates(int* nums, int numsSize) {
//    int srt = 0;
//    int dst = 0;
//    while (dst < numsSize)
//    {
//        if (nums[srt] != nums[dst])
//        {
//            srt++;
//            nums[srt] = nums[dst];
//        }
//        dst++;
//    }
//    return srt + 1;
//}


															//2.【27移除元素】

//双指针，两个人，你去找，我定位，找到不符合放过来，我定位下一个
//用下标
//int removeElement(int* nums, int numsSize, int val) {
//    int src = 0;
//    int dst = 0;
//    while (dst < numsSize)
//    {
//        if (nums[dst] != val)
//        {
//            nums[src] = nums[dst];
//            src++;
//        }
//        dst++;
//    }
//    return src;
//}
////用指针
//int removeElement(int* nums, int numsSize, int val) {
//    int* deta = nums;
//    int* tempNums = nums;
//    int size = 0;
//    while (size < numsSize)
//    {
//        if (*deta != val)
//        {
//            *tempNums = *deta;
//            tempNums++;
//        }
//        deta++;
//        size++;
//    }
//    return tempNums - nums;
//}



																//3.【88合并俩个有序数组】

//思路：从后往前归并，同时考虑223 116 这种223指针先减完的情况
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int temp = nums1Size - 1;
//    while (temp >= 0 && n > 0)
//    {
//        if (m <= 0)
//        {
//            nums1[temp] = nums2[n - 1];
//            --n;
//        }
//        else if (nums1[m - 1] <= nums2[n - 1])
//        {
//            nums1[temp] = nums2[n - 1];
//            --n;
//        }
//        else
//        {
//            nums1[temp] = nums1[m - 1];
//            --m;
//        }
//        --temp;
//    }
//}//时间复杂度O(m+n);


															//4.【203移除链表元素】//附带快速构建链表进行调试

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* oneTemp = NULL;
//    struct ListNode* twoTemp = head;
//    while (twoTemp != NULL)
//    {
//        if (twoTemp->val == val)
//        {
//            if (twoTemp == head)//头删
//            {
//                head = twoTemp->next;
//                free(twoTemp);
//                twoTemp = head;
//            }
//            else//删除节点
//            {
//                oneTemp->next = twoTemp->next;
//                free(twoTemp);//释放节点
//                twoTemp = oneTemp->next;
//            }
//
//        }
//        else//迭代往后走
//        {
//            oneTemp = twoTemp;
//            twoTemp = twoTemp->next;
//        }
//    }
//    return head;
//}

//---------------------------------------快速构建一个链表进行OJ测试---------------------------------------


//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
// 
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* oneTemp = NULL;
//	struct ListNode* twoTemp = head;
//	while (twoTemp != NULL)
//	{
//		if (twoTemp->val == val)
//		{
//			if (twoTemp == head)//头删
//			{
//				head = twoTemp->next;
//				free(twoTemp);
//				twoTemp = head;
//			}
//			else//删除节点
//			{
//				oneTemp->next = twoTemp->next;
//				free(twoTemp);//释放节点
//				twoTemp = oneTemp->next;
//			}
//
//		}
//		else//迭代往后走
//		{
//			oneTemp = twoTemp;
//			twoTemp = twoTemp->next;
//		}
//	}
//	return head;
//}
//
//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	n1->val = 7;
//	n2->val = 7;
//	n3->val = 7;
//	n4->val = 7;
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//	struct ListNode*head = removeElements(n1,7);
//
//	return 0;
//}

		
//——————————————————————————————————————————————————



																//5.【206反转链表】

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 //【思路1】遍历替换：不移动节点，改变节点的值。双重循环
 //第一个节点数和后一个节点数交换，后一个节点指针+1，继续和第一个替换，直到5放在开头，然后第一个节点+1，重复。
 /*struct ListNode* reverseList(struct ListNode* head)
 {
 if(head == NULL)
 {
    return head;
 }
 struct ListNode* phead = head;
     while(phead->next != NULL)
     {
         struct ListNode* str = phead->next;
         while(str != NULL)
         {
             int storage = phead->val;
             phead->val = str->val;
             str->val = storage;
             str = str->next;
         }
     phead = phead->next;
     }
     return head;
 }*/
 




                                                        //6.【876链表的中间结点】

//思路1：快慢指针（双指针）：两个指针，从头节点开始，poi1一次走一步，poi2一次走2步，poi2走完（下一个是NULL），此时poi1速度是它1/2、刚好走到一半路程
//思路2：每走一下，更新中间节点？

//struct ListNode* middleNode(struct ListNode* head) {
//    if (head->next == NULL)return head;
//    struct ListNode* middleNode, * lastNode;
//    middleNode = lastNode = head;
//    while (lastNode != NULL && lastNode->next != NULL)//(lastNode && lastNode->next)这种写法省略了空指针
//    {
//        middleNode = middleNode->next;
//        lastNode = lastNode->next->next;
//    }
//    return middleNode;
//}



                                                        //7.【链表中第k个节点】

//思路：双指针，第一个在原位，第二个走k-1或者k个位（如果以最后位的前一位开始数，就k），然后第一位和最后一位一起走，最后一位走到尾部（如果是以前一位开始数，就走到NULL），此时第一位的位置就是倒数第K个。
//struct ListNode* getKthFromEnd(struct ListNode* head, int k) {
//    struct ListNode* first, * last;
//    first = last = head;
//    while (--k)
//    {
//        if (last == NULL)
//        {
//            return NULL;
//        }
//        last = last->next;
//    }
//    while (last->next)
//    {
//        first = first->next;
//        last = last->next;
//    }
//    return first;
//}




                                                                        //8【21.合并两个有序链表】

//思路1：创建一个头节点，依次遍历两个链表，进行尾插。
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* head, * last;
//    head = last = NULL;
//    if (!list1)
//    {
//        return list2;
//    }
//    if (!list2)
//    {
//        return list1;
//    }
//    while (list1 && list2)
//    {
//        if (list1->val <= list2->val)
//        {
//            if (!head)
//            {
//                head = last = list1;
//                list1 = list1->next;
//            }
//            else
//            {
//                last->next = list1;
//                last = list1;
//                list1 = list1->next;
//            }
//        }
//        else
//        {
//            if (!head)
//            {
//                head = last = list2;
//                list2 = list2->next;
//            }
//            else
//            {
//                last->next = list2;
//                last = list2;
//                list2 = list2->next;
//            }
//        }
//    }
//    //有一边链表提前结束了，另一个链表的还没链接完，把它接上去新链表的后面。
//    if (!list1)
//    {
//        last->next = list2;
//    }
//    if (!list2)
//    {
//        last->next = list1;
//    }
//    return head;
//}