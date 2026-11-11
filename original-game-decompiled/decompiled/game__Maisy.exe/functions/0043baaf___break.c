
/* ==== __break @ 0043baaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043baaf-0043baaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


