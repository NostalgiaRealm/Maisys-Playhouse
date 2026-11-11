
/* ==== __break @ 0042973b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042973b-0042973b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


