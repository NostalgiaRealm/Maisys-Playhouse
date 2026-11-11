
/* ==== __break @ 0049adbf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adbf-0049adbf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


