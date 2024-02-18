FUNCTION isPrime(number)
    IF number < 2 THEN
        RETURN FALSE
    END IF
    
    FOR divisor FROM 2 TO SQUARE_ROOT(number) DO
        IF number MOD divisor == 0 THEN
            RETURN FALSE
        END IF
    END FOR
    
    RETURN TRUE
END FUNCTION

BEGIN
    DECLARE integer N
    PRINT "Enter a number: "
    READ N
    
    IF isPrime(N) THEN
        PRINT N, " is a prime number."
    ELSE
        PRINT N, " is not a prime number."
    END IF
END
