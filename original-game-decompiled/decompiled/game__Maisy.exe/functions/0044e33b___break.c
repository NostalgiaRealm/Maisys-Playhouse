
/* ==== __break @ 0044e33b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e33b-0044e33b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


