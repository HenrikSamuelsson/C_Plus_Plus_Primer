/**
 * @file
 *      nested_comments.cpp
 * @author
 *      Henrik Samuelsson
 */

/**
 * @brief
 *      Test to see how the compiler complains when comments are nested.
 */
int main() {
    /*
     * Start of first block comment.
     * 
    /* A nested block comment (not allowed).*/
     *
     * End of first block comment.
     */
    return ;
}

