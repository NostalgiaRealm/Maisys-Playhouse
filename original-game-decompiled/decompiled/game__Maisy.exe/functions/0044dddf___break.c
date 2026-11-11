
/* ==== __break @ 0044dddf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dddf-0044dddf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


