
/* ==== __break @ 0044bca2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bca2-0044bca2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


