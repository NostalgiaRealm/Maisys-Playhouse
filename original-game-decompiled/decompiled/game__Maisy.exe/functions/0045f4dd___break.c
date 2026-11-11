
/* ==== __break @ 0045f4dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f4dd-0045f4dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


