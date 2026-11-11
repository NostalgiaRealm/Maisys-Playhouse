
/* ==== __break @ 0043bced ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bced-0043bced
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


