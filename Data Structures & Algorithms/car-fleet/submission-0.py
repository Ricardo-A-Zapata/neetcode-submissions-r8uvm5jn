class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:

        cars = sorted( zip(position, speed), reverse=True )
        fleets = 0
        prevMax = -1

        for pos, spd in cars:
            curr = (target - pos) / spd

            if curr > prevMax:
                fleets += 1
                prevMax = curr
        
        return fleets


        
        