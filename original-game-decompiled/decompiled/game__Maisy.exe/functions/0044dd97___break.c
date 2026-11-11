
/* ==== __break @ 0044dd97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dd97-0044dd97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


