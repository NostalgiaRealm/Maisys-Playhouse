
/* ==== __break @ 0049f5ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f5ae-0049f5ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


