#define _CRT_SECURE_NO_WARNINGS 1    

															//1.��26ɾ�����������е��ظ��

//˼·��˫ָ�룬���ָ��2������ָ��1��ָ��1++����ֵΪ*ָ��2
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


															//2.��27�Ƴ�Ԫ�ء�

//˫ָ�룬�����ˣ���ȥ�ң��Ҷ�λ���ҵ������ϷŹ������Ҷ�λ��һ��
//���±�
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
////��ָ��
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



																//3.��88�ϲ������������顿

//˼·���Ӻ���ǰ�鲢��ͬʱ����223 116 ����223ָ���ȼ�������
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
//}//ʱ�临�Ӷ�O(m+n);


															//4.��203�Ƴ�����Ԫ�ء�//�������ٹ���������е���

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
//            if (twoTemp == head)//ͷɾ
//            {
//                head = twoTemp->next;
//                free(twoTemp);
//                twoTemp = head;
//            }
//            else//ɾ���ڵ�
//            {
//                oneTemp->next = twoTemp->next;
//                free(twoTemp);//�ͷŽڵ�
//                twoTemp = oneTemp->next;
//            }
//
//        }
//        else//����������
//        {
//            oneTemp = twoTemp;
//            twoTemp = twoTemp->next;
//        }
//    }
//    return head;
//}

//---------------------------------------���ٹ���һ���������OJ����---------------------------------------


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
//			if (twoTemp == head)//ͷɾ
//			{
//				head = twoTemp->next;
//				free(twoTemp);
//				twoTemp = head;
//			}
//			else//ɾ���ڵ�
//			{
//				oneTemp->next = twoTemp->next;
//				free(twoTemp);//�ͷŽڵ�
//				twoTemp = oneTemp->next;
//			}
//
//		}
//		else//����������
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

		
//����������������������������������������������������������������������������������������������������



																//5.��206��ת����

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 //��˼·1�������滻�����ƶ��ڵ㣬�ı�ڵ��ֵ��˫��ѭ��
 //��һ���ڵ����ͺ�һ���ڵ�����������һ���ڵ�ָ��+1�������͵�һ���滻��ֱ��5���ڿ�ͷ��Ȼ���һ���ڵ�+1���ظ���
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
 




                                                        //6.��876������м��㡿

//˼·1������ָ�루˫ָ�룩������ָ�룬��ͷ�ڵ㿪ʼ��poi1һ����һ����poi2һ����2����poi2���꣨��һ����NULL������ʱpoi1�ٶ�����1/2���պ��ߵ�һ��·��
//˼·2��ÿ��һ�£������м�ڵ㣿

//struct ListNode* middleNode(struct ListNode* head) {
//    if (head->next == NULL)return head;
//    struct ListNode* middleNode, * lastNode;
//    middleNode = lastNode = head;
//    while (lastNode != NULL && lastNode->next != NULL)//(lastNode && lastNode->next)����д��ʡ���˿�ָ��
//    {
//        middleNode = middleNode->next;
//        lastNode = lastNode->next->next;
//    }
//    return middleNode;
//}



                                                        //7.�������е�k���ڵ㡿

//˼·��˫ָ�룬��һ����ԭλ���ڶ�����k-1����k��λ����������λ��ǰһλ��ʼ������k����Ȼ���һλ�����һλһ���ߣ����һλ�ߵ�β�����������ǰһλ��ʼ�������ߵ�NULL������ʱ��һλ��λ�þ��ǵ�����K����
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




                                                                        //8��21.�ϲ�������������

//˼·1������һ��ͷ�ڵ㣬���α���������������β�塣
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
//    //��һ��������ǰ�����ˣ���һ������Ļ�û�����꣬��������ȥ������ĺ��档
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