
/* ==== __break @ 0049adf4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adf4-0049adf4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


