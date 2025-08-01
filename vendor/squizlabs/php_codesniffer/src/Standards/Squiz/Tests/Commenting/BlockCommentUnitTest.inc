<?php

/*
    Comments need to be indented 4 space.
*/

/*
    same with multi-line
    comments.
*/

/*
    But they can:
        - be indented more than 4
        - but not less than 4
*/

/*
    - This is valid:
   Not indented correctly.
*/

/*
   Comments need to be indented 4 space.
*/

/*
    Comments need to be indented 4 space.
     Comments need to be indented 4 space.
   Comments need to be indented 4 space.
  Comments need to be indented 4 space.

    Comments need to be indented 4 space.
   Comments need to be indented 4 space.
*/

/*
    Block comments require a blank
    line after them.
*/
$code = 'should not be here';

/*
    Closing comment not aligned
    */

/*
    Closing comment not aligned
 */

/* Not allowed */

/*  Not allowed
    either.
*/

/* */

$code = 'should not be here';
/*

    Block comments require a blank
    line before them. */

/*
*/

/** Not allowed */

/**  Not allowed
    either.
**/

/*
    no capital
    letter.
*/

echo 'hi';

function func()
{
    echo 1;
    /**
       test
       here
    **/
    echo 'test';
    /**
        Test
        here
       **/

}//end func()

public static function test()
{
    /*
        Block comments do not require a blank line before them
        if they are after T_OPEN_CURLY_BRACKET.
    */

    $code = '';

}//end test()


public static function test()
{

    /*
        Block comments do not require a blank line before them
        if they are after T_OPEN_CURLY_BRACKET.
    */

    $code = '';

}//end test()

class MyClass
{

    /**
     * Comment should be ignored.
     *
     * @var   integer
     * @since 4.0.0
     */
    const LEFT = 1;

}

/**
 * Comment should be ignored.
 *
 */
final class MyClass
{
    /**
     * Comment should be ignored.
     *
     */
    final public function test() {}
}

switch ($var) {
    case 'foo':
        /*
            Foo comment.
            This is a multiple
            line comment for Foo.
        */

        echo 'Foo';
    break;

    default:

        /*
            Foo comment.
            This is a multiple
            line comment for Foo.
        */

        echo 'Default';
    break;
}//end switch

/**
 * Comment should be ignored in PHP < 5.4.
 *
 */
trait MyTrait {

}

/*
    这是一条测试评论.
*/

/*Channels::includeSystem('Permission');
if (Permission::hasPermission($projectid, 'project.metadata.add') === FALSE) {
    throw new PermissionException(_('You do not have permission to add metadata field'));
}*/

/*
    Comment goes here
*/
$two = (1 + 1);  // I'm not a comment closer!

class Foo
{

    /**
     * Comment here.
     *
     * @var array
     */
    var $bar = array();

}

class TabTest {
	public function bar() {
		/*
		 * Comment line 1.
		 * Comment line 2.
		*/

		if ($foo) {
			echo 'foo';
		}

		/* Comment line 1.
			Comment line 2.
		*/

		if ($foo) {
			echo 'foo';
		}
	}
}

	/*
	 * Test distinguishing between two distinct block comments which directly follow each other.
	 */
	/*
     *
	*/

// Mid-line inline comment style should not be auto-fixed.
if (true || /* test */ -1 == $b) {}
$y = 10 + /* test */ -2;

/*
 * When the comment contains PHPCS annotations, the comment closer was being misidentified.
 * phpcs:disable Standard.Category.Sniff
 */

/*
 * When the comment contains PHPCS annotations, the comment closer was being misidentified.
 * See: {@link https://github.com/squizlabs/PHP_CodeSniffer/issues/1918}
 * @phpcs:disable Standard.Category.Sniff
 */

?>
<?php
/*
 * No blank line required above the comment if it's the first non-empty token after a PHP open tag.
 */

?>
<?php


/*
 * No blank line allowed above the comment if it's the first non-empty token after a PHP open tag.
 */

?>
<?=
/*
 * No blank line required above the comment if it's the first non-empty token after a PHP open tag.
 */

$contentToEcho
?>
<?=


/*
 * No blank line allowed above the comment if it's the first non-empty token after a PHP open tag.
 */
$contentToEcho

/**
 * Comment should be ignored, even though there is an attribute between the docblock and the class declaration.
 */

#[AttributeA]

final class MyClass
{
    /**
     * Comment should be ignored, even though there is an attribute between the docblock and the function declaration
     */
    #[AttributeA]
    #[AttributeB]
    final public function test() {}
}

/**
 * Comment should be ignored.
 */
abstract class MyClass
{
    /**
     * Comment should be ignored.
     */
    readonly public string $prop;
}

/**
 * Comment should be ignored
 *
 */
enum MyEnum {

}

class FinalProperties {
    /**
     * Comment should be ignored.
     */
    final int $prop = 1;
}

class AsymVisibility {
    /**
     * Comment should be ignored.
     */
    public(set) int $prop = 1;

    /**
     * Comment should be ignored.
     */
    protected(set) int $prop = 1;

    /**
     * Comment should be ignored.
     */
    private(set) int $prop = 1;
}
