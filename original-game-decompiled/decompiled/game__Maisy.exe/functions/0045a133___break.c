
/* ==== __break @ 0045a133 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a133-0045a133
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


