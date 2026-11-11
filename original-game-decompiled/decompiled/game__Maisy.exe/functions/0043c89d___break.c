
/* ==== __break @ 0043c89d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c89d-0043c89d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


