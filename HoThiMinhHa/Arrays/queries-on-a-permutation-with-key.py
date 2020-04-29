class Solution:
    def processQueries(self, queries: List[int], m: int) -> List[int]:
        P=[n for n in range(1,m+1)]
        res=[] 
        for x in queries : 
            i = P.index(x)
            res.append(i)
            P.insert(0,P.pop(i))
        return res
