
/* ==== __break @ 0049f5fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f5fd-0049f5fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


