# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None:return root # 沒有東西，就提早結束
        left=self.removeLeafNodes(root.left,target) # 先用同一個函式，處理左半邊
        right=self.removeLeafNodes(root.right,target) # 先用同一個函式，處理右半邊
        if left==None and right==None and root.val==target: # 最後變葉子，且值同
            return None # 什麼都沒有，交給當初呼叫的人
        root.left=left # 把新的左邊刪除後的結果，接到左邊
        root.right=right # 把新的右邊刪除後的結果，接到右邊
        return root # 交回新的答案