
/* ==== __break @ 0043bfe7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bfe7-0043bfe7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


