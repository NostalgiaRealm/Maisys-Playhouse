
/* ==== __break @ 004695fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695fc-004695fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


