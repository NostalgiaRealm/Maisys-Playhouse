
/* ==== __break @ 0044e33d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e33d-0044e33d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


