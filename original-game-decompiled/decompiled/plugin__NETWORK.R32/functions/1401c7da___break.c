
/* ==== __break @ 1401c7da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7da-1401c7da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


