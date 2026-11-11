
/* ==== __break @ 0043bccf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bccf-0043bccf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


