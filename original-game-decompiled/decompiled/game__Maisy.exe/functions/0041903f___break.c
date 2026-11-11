
/* ==== __break @ 0041903f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041903f-0041903f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


