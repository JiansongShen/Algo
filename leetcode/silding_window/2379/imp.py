# by doubao
class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        # 初始化结果为k（最坏情况需要翻转全部k个白色块）
        res = k
        # cur 记录当前窗口内需要翻转的白色块数量
        cur = 0
        
        # 计算第一个窗口（前k个字符）的白色块数量
        for i in range(k):
            if blocks[i] == 'W':
                cur += 1
        res = cur
        
        # 滑动窗口遍历剩余字符
        for i in range(k, len(blocks)):
            # 右侧新进入窗口的字符如果是白色，需要增加翻转次数
            if blocks[i] == 'W':
                cur += 1
            # 左侧移出窗口的字符如果是白色，减少翻转次数
            if blocks[i - k] == 'W':
                cur -= 1
            # 更新最小翻转次数
            res = min(cur, res)
        
        return res
