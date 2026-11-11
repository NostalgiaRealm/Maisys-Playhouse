
/* ==== __break @ 0043baa8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043baa8-0043baa8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


