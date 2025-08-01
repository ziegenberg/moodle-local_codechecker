<?php
/**
 * Unit test class for the PropertyDeclaration sniff.
 *
 * @author    Greg Sherwood <gsherwood@squiz.net>
 * @copyright 2006-2015 Squiz Pty Ltd (ABN 77 084 670 600)
 * @license   https://github.com/PHPCSStandards/PHP_CodeSniffer/blob/master/licence.txt BSD Licence
 */

namespace PHP_CodeSniffer\Standards\PSR2\Tests\Classes;

use PHP_CodeSniffer\Tests\Standards\AbstractSniffUnitTest;

/**
 * Unit test class for the PropertyDeclaration sniff.
 *
 * @covers \PHP_CodeSniffer\Standards\PSR2\Sniffs\Classes\PropertyDeclarationSniff
 */
final class PropertyDeclarationUnitTest extends AbstractSniffUnitTest
{


    /**
     * Returns the lines where errors should occur.
     *
     * The key of the array should represent the line number and the value
     * should represent the number of errors that should occur on that line.
     *
     * @return array<int, int>
     */
    public function getErrorList()
    {
        return [
            7   => 1,
            9   => 2,
            10  => 1,
            11  => 1,
            17  => 1,
            18  => 1,
            23  => 1,
            38  => 1,
            41  => 1,
            42  => 1,
            50  => 2,
            51  => 1,
            55  => 1,
            56  => 1,
            61  => 1,
            62  => 1,
            68  => 1,
            69  => 1,
            71  => 1,
            72  => 1,
            76  => 1,
            80  => 1,
            82  => 1,
            84  => 1,
            86  => 1,
            90  => 1,
            94  => 1,
            95  => 1,
            96  => 1,
            97  => 2,
            101 => 1,
            105 => 1,
            109 => 1,
            111 => 1,
            115 => 3,
            116 => 3,
            117 => 2,
            118 => 3,
            120 => 1,
            121 => 1,
            122 => 2,
            123 => 2,
            125 => 1,
            126 => 1,
            127 => 2,
        ];

    }//end getErrorList()


    /**
     * Returns the lines where warnings should occur.
     *
     * The key of the array should represent the line number and the value
     * should represent the number of warnings that should occur on that line.
     *
     * @return array<int, int>
     */
    public function getWarningList()
    {
        return [
            13 => 1,
            14 => 1,
            15 => 1,
            53 => 1,
        ];

    }//end getWarningList()


}//end class
