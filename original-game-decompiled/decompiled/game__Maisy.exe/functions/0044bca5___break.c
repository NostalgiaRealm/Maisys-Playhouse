
/* ==== __break @ 0044bca5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bca5-0044bca5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


