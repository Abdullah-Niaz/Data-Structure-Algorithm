FUNCTION calculateSumOfEvenNumbers(N: integer) -> sum: integer
    sum := 0
    FOR i FROM 1 TO N DO
        IF i MOD 2 == 0 THEN
            sum := sum + i
        END IF
    END FOR
    RETURN sum
END FUNCTION

BEGIN
    DECLARE integer N, sum
    PRINT "Enter a number N: "
    READ N
    
    sum := calculateSumOfEvenNumbers(N)
    
    PRINT "Sum of even numbers up to ", N, " is: ", sum
END
