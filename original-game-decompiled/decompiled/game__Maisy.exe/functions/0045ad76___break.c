
/* ==== __break @ 0045ad76 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad76-0045ad76
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


