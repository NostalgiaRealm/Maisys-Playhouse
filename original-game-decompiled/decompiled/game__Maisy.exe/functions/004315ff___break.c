
/* ==== __break @ 004315ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004315ff-004315ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


