FUNCTION printOddNumbers(N: integer)
    FOR i FROM 1 TO N DO
        IF i MOD 2 != 0 THEN
            PRINT i
        END IF
    END FOR
END FUNCTION

BEGIN
    DECLARE integer N
    PRINT "Enter a number: "
    READ N
    
    CALL printOddNumbers(N)
END
