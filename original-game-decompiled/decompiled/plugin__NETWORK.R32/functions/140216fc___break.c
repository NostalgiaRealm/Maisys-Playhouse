
/* ==== __break @ 140216fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fc-140216fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


