
/* ==== __break @ 0044bcae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bcae-0044bcae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


