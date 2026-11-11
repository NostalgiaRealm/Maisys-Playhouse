
/* ==== __break @ 004792fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004792fc-004792fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


