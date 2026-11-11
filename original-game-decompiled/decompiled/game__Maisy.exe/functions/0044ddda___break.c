
/* ==== __break @ 0044ddda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ddda-0044ddda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


