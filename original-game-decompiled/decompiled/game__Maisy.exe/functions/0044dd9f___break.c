
/* ==== __break @ 0044dd9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dd9f-0044dd9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


