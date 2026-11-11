
/* ==== __break @ 004401da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004401da-004401da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


