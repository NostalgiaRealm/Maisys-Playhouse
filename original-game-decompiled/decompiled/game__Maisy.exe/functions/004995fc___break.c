
/* ==== __break @ 004995fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004995fc-004995fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


