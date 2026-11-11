
/* ==== __break @ 0049381d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049381d-0049381d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


