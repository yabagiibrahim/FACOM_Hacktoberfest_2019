ordena :: [Int] -> [Int]
ordena [] = []
ordena (x:xs) = insertionSort x (ordena xs)

insertionSort :: Int -> [Int] -> [Int]
insertionSort a [] = [a]
insertionSort a (x:xs)
                        |(a < x) = a:(x:xs)
                        |otherwise = x:insertionSort a xs