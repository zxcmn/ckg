#define _CRT_SECURE_NO_WARNINGS 1    

															//1.��ɾ�����������е��ظ��

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


															//2.���Ƴ�Ԫ�ء�

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



